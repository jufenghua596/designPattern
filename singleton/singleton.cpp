// singleton.cpp : �������̨Ӧ�ó������ڵ㡣
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

Singleton* Singleton::m_instance = NULL; //��ľ�̬��Ա������Ҫ������߳�ʼ��

int main()
{
	
	Singleton* p1 = Singleton::getInstance();
    return 0;
}

