#ifndef DarkRoast_h__
#define DarkRoast_h__


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
#endif // DarkRoast_h__