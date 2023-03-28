/// @file Shape.h
/// @brief The Shape.h file.
///
/// This file contains the Shape class, which is an abstract base class for shapes, and
/// the Rectangle and Circle classes which inherit from the Shape class. The file
/// includes the necessary header files and defines the classes and their member functions.
///
/// @date 2023-03-25
/// @author Ry kuper

#pragma once
#include"Drawable.h"
#include <iostream>
#include <cmath>


class Shape : public Drawable {
public:
	virtual double getArea() const = 0;
};

/// @brief prints derived classes of Shapes
/// 
/// @param takes derived classes of Shapes and prints the corresponding Shape type class
void draw(Drawable& item);

/// @brief calculates the area of the given Shape
/// 
/// @param takes a pointer to a reference of a Shape 
/// @param takes the number of Shapes 
/// @return total calculated area of the shapes
double getTotalArea(Shape** shapes, int numShapes);