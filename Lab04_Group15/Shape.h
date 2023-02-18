#pragma once
#include"Drawable.h"
#include <iostream>
#include <cmath>
#define PIE		3.14


class Shape: public Drawable {
public:
	void draw() = 0;
	virtual double getArea() = 0;
};
class Rectangle: public Shape
{
	int length;
	int width;

public:

	Rectangle() //default constructor to initialize varaibles
	{
		length = 0;
		width = 0;
	}

	void setLength(int length) // sets the length
	{
		this->length = length;
	}

	void setWidth(int width) // sets the width
	{
		this->width = width;
	}

	int getLength() // returns the length of rectangle class
	{
		return length;
	}

	int getWidth() // returns the width of rectangle class
	{
		return width;
	}

	double getArea() // calculates the area of rectangle  
	{
		double area = this->length * this->width;
		return area;
	}

	void draw()
	{
		std::cout << "**************" << std::endl;
		std::cout << "*            *" << std::endl;
		std::cout << "*            *" << std::endl;
		std::cout << "**************" << std::endl;
	}

};

class Circle: public Shape
{
	double radius;

public:

	Circle()
	{
		this->radius = 0;
	}

	void SetRadius(int a)
	{
		radius = a;
	}

	double getCircum()
	{
		return radius;
	}

	double getArea()
	{
		double area;
		area = PIE * pow(this->radius, 2);
		return area;
	}

	void draw()
	{
		std::cout << "   ****" << std::endl;
		std::cout << " *      *" << std::endl;
		std::cout << "*        *" << std::endl;
		std::cout << " *      *" << std::endl;
		std::cout << "   ****" << std::endl;
	}
};

void DisplayShape(Shape& shape);
double getTotalArea(Shape** shapes, int numShapes);