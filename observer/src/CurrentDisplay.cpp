#include "CurrentDisplay.h"

using namespace std;

CurrentDisplay :: CurrentDisplay (WeatherData &wd) : weatherData(wd){
    weatherData.registerObserver(this);
}

void CurrentDisplay :: update(float temp, float heat,float humidity){
    this->temperature = temp;
    this->heat = heat;
    this->humidity = humidity;
}

void CurrentDisplay :: display(){
    cout<< "Current conditions ::"  << temperature <<" C degrees and " << humidity  << "% humidity" << endl;
}
