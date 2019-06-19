#include "WeatherData.h"
#include "ActiveDisplay.h"
#include "PassiveDisplay.h"

int main()
{
    WeatherData data;
    PassiveDisplay pd(&data);
    ActiveDisplay ad(&data);
    
    data.registerObserver(&pd);
    data.setMeasurements(27.5, 1080.0, 73.8);
    data.setMeasurements(28.5, 1080.0, 73.8);
}