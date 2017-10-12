#pragma once
class Observer
{
public:
	virtual void update(float temp, float humidity, float pressure) = 0;

};


