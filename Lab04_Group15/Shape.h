/// @file
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



/// @brief The Shape class
///
/// This class is an abstract class that inherits from the Drawable class. It defines
/// a virtual function to calculate the area of a shape and is used as a base class
/// for the Rectangle and Circle classes.
///
/// @date 2023-03-25
/// @author Dominic Szymanski


class Shape : public Drawable {
public:
	virtual double getArea() const = 0;
};


void draw(Drawable& item);
double getTotalArea(Shape** shapes, int numShapes);