/// @file Rectangle.h
/// @brief Contains the declaration of the Rectangle class.
///
/// @details This file includes the declaration of the Rectangle class, which is a concrete implementation of the Shape abstract class.
/// It represents a Rectangle shape and overrides the abstract methods of the parent class.
///
/// @date 2023-03-28
/// @author Ry kuper
#pragma once
#include"Shape.h"
#include<iostream>


// @brief The Rectangle class.
///
/// This class is derived from the Shape class and implements a rectangle shape. It
/// has member variables length and width, which are used to calculate the area of
/// the rectangle. It also has getter and setter functions for the length and width,
/// and overrides the getArea and draw functions from the Shape class.
///
/// @date 2023-03-25
/// @see Shape
/// @author DOminic Szymanski 


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
