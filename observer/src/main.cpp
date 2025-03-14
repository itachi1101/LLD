#include "WeatherData.h"
#include "CurrentDisplay.h"

using namespace std;

int main() {
    WeatherData weatherData;
    CurrentDisplay currentDisplay(weatherData);

    weatherData.setMeasurements(30.4, 65.0, 10.0);
    currentDisplay.display();
    weatherData.setMeasurements(2.1, 70.0, 20.0);

    return 0;
}
// weather_station/
// │── src/
// │   ├── main.cpp           // Main driver code
// │   ├── WeatherData.cpp    // WeatherData class (subject)
// │   ├── CurrentDisplay.cpp // A concrete observer (displays current conditions)
// │   ├── StatisticsDisplay.cpp // Another observer
// │── include/
// │   ├── WeatherData.h      // Header file for WeatherData
// │   ├── Observer.h         // Interface for observers
// │   ├── DisplayElement.h   // Interface for display elements
// │── Makefile               // (Optional) Compilation script
