#pragma once
#include <iostream>
#include <cmath>
#define PIE		3.14


class Shape {
public:
	virtual void draw() = 0;
};
class Rectangle :public Shape
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

	int RectangleArea() // calculates the area of rectangle  
	{
		int area = length * width;
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

class Circle :public Shape
{
	double radius;

public:

	void setCircum(int a)
	{
		radius = a;
	}

	double getCircum()
	{
		return radius;
	}

	double CircleArea()
	{
		double area;
		area = PIE * pow(radius, 2);
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
