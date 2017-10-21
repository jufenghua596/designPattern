#ifndef CondimentDecorator_h__
#define CondimentDecorator_h__


#include "./Beverage.h"
#include <string>
class CondimentDecorator:public Beverage
{
public:
	virtual std::string getDescription()=0;
	 
};

#endif // CondimentDecorator_h__
