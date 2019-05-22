#include "WeatherData.hpp"
#include "StreetDisplay.hpp"
#include "MobileDisplay.hpp"

int main()
{
    WeatherData data;
    StreetDisplay streetDisplay;
    MobileDisplay mobileDisplay;
    
    data.registerObserver(&streetDisplay);
    data.registerObserver(&mobileDisplay);
    data.notifyAllObservers();

    data.setTemperature(25.0);
    data.setPressure(1080.0);
    data.setHumidity(73.0);

    data.notifyAllObservers();
}