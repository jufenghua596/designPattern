#pragma once
#include "../Beverage.h"
#include "../CondimentDecorator.h"
#include <string>

class Whip :public CondimentDecorator {
public:
	Whip(Beverage* bev) {
		this->beverage = bev;
	}
	std::string getDescription() {
		return beverage->getDescription() + ", Whip";
	}
	double cost() {
		return .10 + beverage->cost();
	}
public:
	Beverage* beverage;
};
