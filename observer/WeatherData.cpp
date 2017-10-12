#include "stdafx.h"
#include "WeatherData.h"

int WeatherData::registerObserver(Observer& obv)
{
	m_observers.push_front(&obv);
	return true;
}

void WeatherData::removeObserver(Observer& obv)
{
	for (auto it = m_observers.begin(); it != m_observers.end(); ++it) {
		if ((*it) == &obv) {
			m_observers.erase(it);
		}
	}
}

void WeatherData::notifyObserver()
{
	for (auto iter = m_observers.begin(); iter != m_observers.end(); iter++)
		(*iter)->update(this->m_temperature, this->m_humidity, this->m_pressure);
}

void WeatherData::measurementsChanged()
{
	this->notifyObserver();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
	this->m_temperature = temperature;
	this->m_humidity = humidity;
	this->m_pressure = pressure;
	this->measurementsChanged();
}

float WeatherData::getTemperature()
{
	return this->m_temperature;
}

float WeatherData::getHumidity()
{
	return this->m_humidity;
}

float WeatherData::getPressure()
{
	return this->m_pressure;
}
