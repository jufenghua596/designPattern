#include "stdafx.h"
#include "CurrentConditionsDisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject& sub)
{
	m_sub = &sub;
	m_sub->registerObserver(*this);
}
CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
	m_sub->removeObserver(*this);
	if (nullptr != m_sub)
		delete m_sub;
}
void CurrentConditionsDisplay::update(float temp, float humidity, float pressure)
{
	m_temp = temp;
	m_humidity = humidity;
	m_pressure = pressure;
	display();
}
void CurrentConditionsDisplay::display()
{
	std::cout << "Current condition: " << m_temp << "F degrees and "
		<< m_humidity << "%% humidity" << std::endl;
}