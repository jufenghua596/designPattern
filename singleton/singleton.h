// singleton.cpp : �������̨Ӧ�ó������ڵ㡣
#pragma  once
#include "stdafx.h"
#include  <iostream>

class Singleton {
public:
	static Singleton* getInstance();

private:
	Singleton() = default;
	//�Ѹ��ƹ��캯����=������Ҳ��Ϊ˽��,��ֹ������
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);
	static Singleton* m_instance;
};

