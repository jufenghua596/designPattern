#ifndef Espresso_h__
#define Espresso_h__


#include "../Beverage.h"
#include <string>
class Espresso :
	public Beverage
{
public:
	Espresso() {
		m_description = "Espresso";
	}
	double cost() {
		return 1.99;
	}
};
#endif // Espresso_h__