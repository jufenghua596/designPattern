// decorator.cpp : 定义控制台应用程序的入口点。
#include "stdafx.h"
#include "coffee/DarkRoast.h"
#include "coffee/Espresso.h"
#include "coffee/HouseBlend.h"
#include "flovoring/Mocha.h"
#include "flovoring/Soy.h"
#include "flovoring/Whip.h"
#include <iostream>

using namespace std;
int main()
{
	Beverage *beverage = new Espresso();
	cout << beverage->getDescription() << " $" << beverage->cost() << endl;

	Beverage *beverage2 = new DarkRoast();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

	Beverage *beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	cout << beverage3->getDescription() << " $" << beverage3->cost() << endl;
	system("pause");
	return 0;
}

