#pragma once
#include"Shape.h"
#include<iostream>

class Rectangle : public Shape
{
	int length;
	int width;

public:

	Rectangle(); //default constructor to initialize varaibles
	void setLength(int length); // sets the length
	void setWidth(int width); // sets the width
	int getLength(); // returns the length of rectangle class
	int getWidth(); // returns the width of rectangle class
	double getArea() const override;
	void draw();
};
