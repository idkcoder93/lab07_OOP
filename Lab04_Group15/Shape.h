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
#define PIE		3.14



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
class Rectangle : public Shape
{
	int length;
	int width;

public:

	
/// @brief Default constructor for the Rectangle class
///
/// Initializes the length and width to 0.
///
	
	Rectangle() //default constructor to initialize varaibles
	{
		length = 0;
		width = 0;
	}

	
/// @brief Setter function for the length of a rectangle
///
/// @param length The length of the rectangle to set
///
	
	
	void setLength(int length) // sets the length
	{
		this->length = length;
	}

/// @brief Setter function for the width of a rectangle
///
/// @param width The width of the rectangle to set
///
	
	
	void setWidth(int width) // sets the width
	{
		this->width = width;
	}

/// @brief Getter function for the length of a rectangle
///
/// @return The length of the rectangle
///
	
	
	int getLength() // returns the length of rectangle class
	{
		return length;
	}

	
/// @brief Getter function for the width of a rectangle
///
/// @return The width of the rectangle
///
	
	
	int getWidth() // returns the width of rectangle class
	{
		return width;
	}

	
/// @brief Calculates the area of a rectangle
///
/// @return The area of the rectangle
///
	
	
	double getArea() const override {
		return width * length;
	}

	
	
/// @brief Draws a rectangle
///
/// Outputs a rectangle shape to the console.
///
	
	void draw()
	{
		std::cout << "\nDrawing a rectangle: " << std::endl;
		std::cout << "**************" << std::endl;
		std::cout << "*            *" << std::endl;
		std::cout << "*            *" << std::endl;
		std::cout << "**************" << std::endl;
	}

};


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

	/// @brief Default constructor for Circle class.
	Circle()
	{
		this->radius = 0;
	}

/// @brief Set the radius of the circle.
/// @param a The radius of the circle.
	void SetRadius(int a)
	{
		radius = a;
	}

/// @brief Get the radius of the circle.
/// @return The radius of the circle.
	double getRadius()
	{
		return radius;
	}
	
	/// @brief Calculate the area of the circle.
	/// @return The area of the circle.
	double getArea() const override {
		return PIE * radius * radius;
	}

	/// @brief Draw the circle.
	void draw()
	{
		std::cout << "\nDrawing a circle:  " << std::endl;
		std::cout << "   ****" << std::endl;
		std::cout << " *      *" << std::endl;
		std::cout << "*        *" << std::endl;
		std::cout << " *      *" << std::endl;
		std::cout << "   ****" << std::endl;
	}
};

void draw(Shape& shape);
double getTotalArea(Shape** shapes, int numShapes);