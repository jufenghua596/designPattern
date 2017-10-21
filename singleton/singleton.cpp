// singleton.cpp : �������̨Ӧ�ó������ڵ㡣

#include <iostream>
#include <memory>


using namespace std;

//class Singleton {
//public:
//	static Singleton* getInstance() 
//	{
//		if (m_instance == NULL)
//			m_instance = new Singleton();
//		return m_instance;
//	}
//private:
//	Singleton() {};
//	static Singleton* m_instance;
//};
//
//Singleton* Singleton::m_instance = NULL; //��ľ�̬��Ա������Ҫ������߳�ʼ��

//int main()
//{
//	
//	Singleton* p1 = Singleton::getInstance();
//    return 0;
//}


/*����ָ�뷽ʽ*/
class Singleton
{
public:
	static std::shared_ptr<Singleton> instance()
	{
		if (_instance == 0)
			_instance = std::shared_ptr<Singleton>(new Singleton);
		return _instance;
	}

	~Singleton()
	{
		std::cout << "Singleton::~Singleton()" << std::endl;
	}
private:
	Singleton() = default;
	Singleton(const Singleton&)=default;
	Singleton& operator=(const Singleton&)=default;
	static std::shared_ptr<Singleton> _instance;
};

std::shared_ptr<Singleton> Singleton::_instance = nullptr;

int main()
{
	std::shared_ptr<Singleton> s = Singleton::instance();
	std::shared_ptr<Singleton> s2 = Singleton::instance();


	system("pause");
	return 0;
}


