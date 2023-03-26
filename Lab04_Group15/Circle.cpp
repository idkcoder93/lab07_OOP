#include "Circle.h"


/// @brief Default constructor for Circle class.
Circle :: Circle ()
{
	this->radius = 0;
}

/// @brief Set the radius of the circle.
/// @param a The radius of the circle.
void Circle :: SetRadius(double a)
{
	radius = a;
}

/// @brief Get the radius of the circle.
/// @return The radius of the circle.
double Circle :: getRadius()
{
	return radius;
}

/// @brief Calculate the area of the circle.
/// @return The area of the circle.
double Circle :: getArea() const
{
	return PIE * radius * radius;
}

/// @brief Draw the circle.
void Circle :: draw()
{
	std::cout << "\nDrawing a circle:  " << std::endl;
	std::cout << "   ****" << std::endl;
	std::cout << " *      *" << std::endl;
	std::cout << "*        *" << std::endl;
	std::cout << " *      *" << std::endl;
	std::cout << "   ****" << std::endl;
}