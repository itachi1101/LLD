#include "CurrentDisplay.h"

using namespace std;

CurrentDisplay :: CurrentDisplay (WeatherData &wd) : weatherData(wd){
    weatherData.registerObserver(this);
}

void CurrentDisplay :: update(float temp, float humidity){
    this->temperature = temp;
    this->humidity = humidity;
}

void CurrentDisplay :: display(){
    cout<< "Current conditions ::"  << temperature <<" C degrees and " << humidity  << "hot" << endl;
}
