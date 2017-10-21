

#ifndef CurrentConditionsDisplay_h__
#define CurrentConditionsDisplay_h__

#include "Observer.h"
#include "Subject.h"
#include "DisplayElement.h"
#include <iostream>
class CurrentConditionsDisplay : public Observer, public DisplayElement
{
public:
	CurrentConditionsDisplay() = default;
	CurrentConditionsDisplay(Subject& sub);
    ~CurrentConditionsDisplay();
	void update(float temp, float humidity, float pressure) override;
	void display() override;
private:
	Subject *m_sub;
	float m_temp;
	float m_humidity;
	float m_pressure;
};
#endif // CurrentConditionsDisplay_h__

