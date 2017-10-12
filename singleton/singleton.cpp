// singleton.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include  <iostream>

class Singleton {
public:
	static Singleton* getInstance() 
	{
		if (m_instance == NULL)
			m_instance = new Singleton();
		return m_instance;
	}
private:
	Singleton() {};
	static Singleton* m_instance;
};

Singleton* Singleton::m_instance = NULL; //类的静态成员变量需要在类外边初始化

int main()
{
	
	Singleton* p1 = Singleton::getInstance();
    return 0;
}

