// singleton.cpp : 定义控制台应用程序的入口点。
#pragma  once
#include "stdafx.h"
#include  <iostream>

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

