#include"Rectangle.h"



/// @brief Default constructor for the Rectangle class
///
/// Initializes the length and width to 0.
///
Rectangle :: Rectangle() //default constructor to initialize varaibles
{
	length = 0;
	width = 0;
}


/// @brief Setter function for the length of a rectangle
///
/// @param length The length of the rectangle to set
///


void Rectangle :: setLength(int length) // sets the length
{
	this->length = length;
}

/// @brief Setter function for the width of a rectangle
///
/// @param width The width of the rectangle to set
///


void Rectangle :: setWidth(int width) // sets the width
{
	this->width = width;
}

/// @brief Getter function for the length of a rectangle
///
/// @return The length of the rectangle
///


int Rectangle :: getLength() // returns the length of rectangle class
{
	return length;
}


/// @brief Getter function for the width of a rectangle
///
/// @return The width of the rectangle
///


int Rectangle :: getWidth() // returns the width of rectangle class
{
	return width;
}


/// @brief Calculates the area of a rectangle
///
/// @return The area of the rectangle
///


double Rectangle :: getArea() const  
{
	return width * length;
}



/// @brief Draws a rectangle
///
/// Outputs a rectangle shape to the console.
///

void Rectangle :: draw()
{
	std::cout << "\nDrawing a rectangle: " << std::endl;
	std::cout << "**************" << std::endl;
	std::cout << "*            *" << std::endl;
	std::cout << "*            *" << std::endl;
	std::cout << "**************" << std::endl;
}
