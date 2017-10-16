#include "stdafx.h"
#include "singleton.h"

Singleton * Singleton::getInstance()
{
	if (m_instance == NULL)
		m_instance = new Singleton();
	return m_instance;
}

Singleton::Singleton(const Singleton&) {

}

Singleton & Singleton::operator=(const Singleton &)
{
	return *this;
}


//类的静态成员变量需要在类外边初始化
//Singleton* Singleton::m_instance = new Singleton();
//Singleton* Singleton::getInstance() {
//	return m_instance;
//}

Singleton* Singleton::m_instance = NULL;
