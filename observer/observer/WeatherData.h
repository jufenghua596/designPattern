#ifndef WeatherData_h__
#define WeatherData_h__


#include "Subject.h"
#include <list>
class WeatherData :
	public Subject
{
private:
	std::list<Observer*>m_observers;
	float m_temperature;
	float m_humidity;
	float m_pressure;
public:
	WeatherData() = default;
	//WeatherData(const WeatherData& wd) :
	//	m_observers(new std::list<Observer*>(*wd.m_observers)) {};
	//WeatherData(WeatherData&& wd) :m_observers(wd.m_observers) {
	//	wd.m_observers = nullptr;
	//}
	~WeatherData() {
		m_observers.clear();
	};
	int registerObserver(Observer &obv);
	void removeObserver(Observer &obv);
	void notifyObserver();
	void measurementsChanged();
	void setMeasurements(float temperature, float humidity, float pressure);
	float getTemperature();
	float getHumidity();
	float getPressure();
};

#endif // WeatherData_h__
