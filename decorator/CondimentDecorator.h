#pragma once
#include "./Beverage.h"
#include <string>
class CondimentDecorator:public Beverage
{
public:
	virtual std::string getDescription()=0;
	 
};

