#pragma once
#include "../Beverage.h"
#include <string>
class DarkRoast :
	public Beverage
{
public:
	DarkRoast() {
		m_description = "DarkRoast";
	}
	double cost() {
		return .99;
	}

};