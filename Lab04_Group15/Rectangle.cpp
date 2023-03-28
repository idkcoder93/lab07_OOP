#include"Rectangle.h"



Rectangle :: Rectangle()
{
	length = 0;
	width = 0;
}

void Rectangle :: setLength(int length) 
{
	this->length = length;
}

void Rectangle :: setWidth(int width)
{
	this->width = width;
}

int Rectangle :: getLength()
{
	return length;
}


int Rectangle :: getWidth()
{
	return width;
}

double Rectangle :: getArea() const  
{
	return width * length;
}


void Rectangle :: draw()
{
	std::cout << "\nDrawing a rectangle: " << std::endl;
	std::cout << "**************" << std::endl;
	std::cout << "*            *" << std::endl;
	std::cout << "*            *" << std::endl;
	std::cout << "**************" << std::endl;
}
