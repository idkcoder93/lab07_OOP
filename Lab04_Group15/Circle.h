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

    /// @brief Default constructor for Circle class.
    Circle();

    /// @brief Set the radius of the circle.
    /// @param a The radius of the circle.
    void SetRadius(double a);

    /// @brief Get the radius of the circle.
    /// @return The radius of the circle.
    double getRadius();

    /// @brief Calculate the area of the circle.
    /// @detailed overrides the virtual function from base class
    /// @return The area of the circle.
    double getArea() const override;

    /// @brief Draw the circle.
    void draw();
 

};