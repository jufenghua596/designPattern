// Observer Pattern.h

#ifndef Subject_h__
#define Subject_h__

#include "Observer.h"

class Subject
{
public:
	virtual int registerObserver(Observer &obv)=0;
	virtual void removeObserver(Observer &obv)=0;
	virtual void notifyObserver()=0;
protected:
	Subject()=default;
};
#endif // Subject_h__