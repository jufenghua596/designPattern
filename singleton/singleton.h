#include "stdafx.h"
#ifndef singleton_h__
#define singleton_h__
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
#endif // singleton_h__

