#pragma once
#include "../Beverage.h"
#include <string>
class HouseBlend :
	public Beverage
{
public:
	HouseBlend() {
		m_description = "House Blend Coffee";
	}
	double cost() {
		return .89;
	}
};