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
    data.setMeasurements(27.7, 1080.2, 74.0);
    data.setMeasurements(28.7, 1081.2, 75.0);
    data.setMeasurements(30.7, 1083.2, 77.0);
}