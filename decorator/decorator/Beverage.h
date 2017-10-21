#ifndef Beverage_h__
#define Beverage_h__


#include <string>
class Beverage
{
public:
	Beverage() : m_description("Unknown Beverage") {}
	virtual std::string getDescription() {
		return m_description;
	}
	virtual double cost() = 0;
protected:
	std::string m_description;
};

#endif // Beverage_h__
