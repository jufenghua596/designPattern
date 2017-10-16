#include "stdafx.h"
#ifndef singleton_h__
#define singleton_h__
class Singleton {
public:
	static Singleton* getInstance();

private:
	Singleton() = default;
	//把复制构造函数和=操作符也设为私有,防止被复制
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);
	static Singleton* m_instance;
};
#endif // singleton_h__

