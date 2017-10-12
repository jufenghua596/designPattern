#pragma once
#include "../Beverage.h"
#include <string>
class Espresso :
	public Beverage
{
public:
	Espresso() {
		m_description = "Espresso";
	}
	double cost() {
		return 1.99;
	}
};