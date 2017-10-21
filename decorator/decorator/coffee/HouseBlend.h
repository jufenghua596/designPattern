#ifndef HouseBlend_h__
#define HouseBlend_h__


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
#endif // HouseBlend_h__