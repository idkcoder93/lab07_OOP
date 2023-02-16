#include "Shape.h"
#include<iostream>

void DisplayShape(Shape& shape)
{
	shape.draw(); // inheriting the draw function in different classes
}
