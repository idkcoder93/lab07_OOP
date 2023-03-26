#pragma once
#include"Shape.h"
#include<iostream>
#define PIE		3.14

/// @brief The Circle class.
///
/// This class inherits from the Shape class and represents a Circle shape.
/// It has a default constructor, a method to set the radius of the circle,
/// a method to get the radius of the circle, a method to calculate the area
/// of the circle, and a method to draw the circle.
///
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