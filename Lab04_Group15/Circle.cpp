#include "Circle.h"

Circle :: Circle ()
{
	this->radius = 0;
}

void Circle :: SetRadius(double a)
{
	radius = a;
}

double Circle :: getRadius()
{
	return radius;
}

double Circle :: getArea() const
{
	return PIE * radius * radius;
}

void Circle :: draw()
{
	std::cout << "\nDrawing a circle:  " << std::endl;
	std::cout << "   ****" << std::endl;
	std::cout << " *      *" << std::endl;
	std::cout << "*        *" << std::endl;
	std::cout << " *      *" << std::endl;
	std::cout << "   ****" << std::endl;
}