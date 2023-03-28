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

class Rectangle : public Shape
{
	int length;
	int width;

public:

	/// @brief default constructor to initialize data members
	///
	/// @detailed initializes the data members set in the Rectangle class
	/// intiailizes the both members to zero 
	
	Rectangle();


	/// @brief sets length data member of the Rectangle class
	/// 
	/// @param sets the length data member for Rectangle classes
	void setLength(int length);


	/// @brief sets the width data member of the Rectangle class
	/// 
	/// @param sets the width data member for Rectangle classes
	void setWidth(int width); 


	/// @brief retrieves length data member from Rectangle class
	/// 
	/// @returns length of that Rectangle class
	int getLength();


	/// @brief retrieves width data member from Rectangle class
	/// 
	/// @return width data member of Rectangle class
	int getWidth();


	/// @brief calculates area of the Rectangle 
	/// 
	/// @detailed function is from abstract clas that overrides 
	/// and calculates the area specifically for Rectangle classes
	/// 
	/// @return number that represents the area 
	double getArea() const override;


	/// @brief std::cout a Rectangle 
	/// 
	/// @detailed function prints out Rectangle on console 
	/// @see Rectangle.cpp
	void draw();
};
