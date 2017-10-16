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


//��ľ�̬��Ա������Ҫ������߳�ʼ��
//Singleton* Singleton::m_instance = new Singleton();
//Singleton* Singleton::getInstance() {
//	return m_instance;
//}

Singleton* Singleton::m_instance = NULL;
