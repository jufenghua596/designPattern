
#include "ShapeFactory.h"


std::shared_ptr<Shape> ShapeFactory::createShape(std::string shapeType)
{
	if (shapeType._Equal("CIRCLE")) {
		return std::shared_ptr<Shape>(new Circle);;

	}
	else if (shapeType._Equal("RECTANGLE")) {
		return std::shared_ptr<Shape>(new Rectangle);;

	}
	return nullptr;

}
