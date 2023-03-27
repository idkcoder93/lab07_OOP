/// @file Circle.h
/// @brief Contains the declaration of the Circle class.
///
/// This file includes the declaration of the Circle class, which inherits from the Shape class and represents a Circle shape.
/// It has a default constructor, a method to set the radius of the circle, a method to get the radius of the circle, a method to
/// calculate the area of the circle, and a method to draw the circle.
///
/// @date 2023-03-25
/// @author Dominic Szymanski
#pragma once
#include"Shape.h"
#include<iostream>
#define PIE		3.14

/// @file Circle.h
/// @brief The Circle class includes all the functions associated with the shape of a Circle.
///
/// This class inherits from the Shape class and represents a Circle.
/// It has a default constructor, a method to set the radius of the circle,
/// a method to get the radius of the circle, a method to calculate the area
/// of the circle, and a method to draw the circle.
///
/// @see Shape
/// @date 2023-03-25
/// @author Dominic Szymanski

class Circle : public Shape
{
	double radius;

public:

    Circle();
    void SetRadius(double a);
    double getRadius();
    double getArea() const override;
    void draw();
 

};