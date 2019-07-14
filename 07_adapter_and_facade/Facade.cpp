#include <iostream>

class Tuner;
class Amplifier;
class Screen;
class PopcornPopper;
class DVDPlayer;
class CDPlayer;
class Projector;
class TheaterLights;

class HomeTheaterFacade {
public:
    HomeTheaterFacade(Tuner* tuner, Amplifier* amplifier, Screen* screen, PopcornPopper* popcornPopper, DVDPlayer* dvdPlayer, CDPlayer* cdPlayer, Projector* projector, TheaterLights* theaterLights);

private:
    Tuner* tuner;
    Amplifier* amplifier;
    Screen* screen;
    PopcornPopper* popcornPopper;
    DVDPlayer* dvdPlayer;
    CDPlayer* cdPlayer;
    Projector* projector;
    TheaterLights* theaterLights;
};

HomeTheaterFacade::HomeTheaterFacade(Tuner* tuner, Amplifier* amplifier, Screen* screen, PopcornPopper* popcornPopper, DVDPlayer* dVDPlayer, CDPlayer* cDPlayer, Projector* projector, TheaterLights* theaterLights)
: tuner{tuner},
amplifier{amplifier},
screen{screen},
popcornPopper{popcornPopper},
dvdPlayer{dvdPlayer},
cdPlayer{cdPlayer},
projector{projector},
theaterLights{theaterLights}
{}

int main()
{
    HomeTheaterFacade theater(nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
    std::cout << "helo" << std::endl;
}