#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include<vector>
#include "Observer.h"
using namespace std;

class WeatherData {
    private:
        vector<Observer*>observers;
        float temperature,heat,humidity;
    public:
        void registerObserver(Observer*o);
        void removeObserver (Observer*o);
        void notifyObservers();

        void setMeasurements(float temp,float heat,float humidity);

};

#endif