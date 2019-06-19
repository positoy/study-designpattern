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
    data.setMeasurements(27.5, 1080.0, 73.8);
    data.setMeasurements(28.5, 1080.0, 73.8);
    data.setMeasurements(29.5, 1080.0, 73.8);
    data.setMeasurements(30.5, 1080.0, 73.8);
    data.setMeasurements(31.5, 1080.0, 73.8);
}