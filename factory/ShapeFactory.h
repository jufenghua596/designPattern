#ifndef _SHAPEFACTORY_H
#define _SHAPEFACTORY_H

#include "Shape.h"
#include <string>
#include "Circle.h"
#include "Rectangle.h"
#include <memory>

class ShapeFactory {
public:
	std::shared_ptr<Shape> createShape(std::string shapeType);
};

#endif //_SHAPEFACTORY_H