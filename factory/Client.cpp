
#include <iostream>
#include "ShapeFactory.h"

int main() {

	ShapeFactory ShapeFactory;
	auto circle = ShapeFactory.createShape("CIRCLE");
	if(nullptr!=circle)
	   circle->draw();

	system("pause");
    return 0;
}