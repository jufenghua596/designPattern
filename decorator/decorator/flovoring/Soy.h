#ifndef Soy_h__
#define Soy_h__

#include "../Beverage.h"
#include "../CondimentDecorator.h"
#include <string>
class Soy : public CondimentDecorator {
public:
	Soy(Beverage* bev) {
		this->beverage = bev;
	}
	std::string getDescription() {
		return beverage->getDescription() + ", Soy";
	}
	double cost() {
		return .15 + beverage->cost();
	}
public:
	Beverage* beverage;
};
#endif // Soy_h__