#include "stdafx.h"
#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include <memory>
using namespace std;
int main() {

	WeatherData weatherData;
	CurrentConditionsDisplay currentdisplay(weatherData);

	weatherData.setMeasurements(80, 65, 30.4f);
	cout << "======================" << endl;
	weatherData.setMeasurements(82, 70, 29.2f);
	cout << "======================" << endl;
	weatherData.setMeasurements(78, 90, 29.2f);

	system("pause");
	return 0;
}