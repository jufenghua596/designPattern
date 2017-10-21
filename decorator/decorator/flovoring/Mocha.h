#ifndef Mocha_h__
#define Mocha_h__


#include "../Beverage.h"
#include "../CondimentDecorator.h"
#include <string>

class Mocha :public CondimentDecorator {
public:
	Mocha(Beverage* bev) {
		this->beverage = bev;
	}
	std::string getDescription() {
		return beverage->getDescription() + ", Mocha";
	}
	double cost() {
		return .20 + beverage->cost();
	}
public:
	Beverage* beverage;
};
#endif // Mocha_h__