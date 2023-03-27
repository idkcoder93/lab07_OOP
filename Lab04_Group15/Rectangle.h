#pragma once
#include"Shape.h"
#include<iostream>

/// @brief Rectangle class derived from Shape
///
/// This is a concrete class derived from the Shape class  
/// Overrides the draw function from the Drawable class. 
/// The data members are both integer-types representing length and width of the Rectangle class. 
/// The getters and setters functions are present for retrieving and setting members.
/// The function getArea calculates area of a Rectangle.
/// draw function is a derived function from Shape and is used for this class. 
/// 
/// @date 2023-03-25
/// @author Alex Fridman
/// 

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
