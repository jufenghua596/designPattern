#ifndef Whip_h__
#define Whip_h__


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
#endif // Whip_h__
