#include "WeatherData.h"
#include<iostream>
using namespace std;
void WeatherData :: registerObserver(Observer*o){
    observers.push_back(o);
}

void WeatherData :: removeObserver(Observer*o){
    observers.erase(std::remove(observers.begin(), observers.end(), o), observers.end());
}

void WeatherData :: notifyObservers(){
    for(Observer*obs:observers){
        obs->update(temperature,humidity);
    }
}

void WeatherData :: setMeasurements(float temp,float humidity){
    this->temperature = temp;
    this->humidity = humidity;
    cout<<temperature <<" "<<humidity <<" hello"<<endl;
    notifyObservers();
}
