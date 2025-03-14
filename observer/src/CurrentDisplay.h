#ifndef CURRENTDISPLAY_H
#define CURRENTDISPLAY_H
// concrete observer

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"
#include <iostream>
using namespace std;

class CurrentDisplay : public Observer, public DisplayElement {
    private :
        float temperature,heat,humidity;
        WeatherData weatherData;
    public:
        CurrentDisplay(WeatherData& wd);
        void update(float temp,float heat,float humidity) override;
        void display() override;
};


#endif

