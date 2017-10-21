#ifndef Observer_h__
#define Observer_h__


class Observer
{
public:
	virtual void update(float temp, float humidity, float pressure) = 0;

};


#endif // Observer_h__
