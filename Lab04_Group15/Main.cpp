#include"Drawable.h"
#include"Shape.h"
#include"Vehicle.h"
#include<iostream>

/// @file
/// @brief The main.cpp file.
///
/// This file contains the main function, which creates Vehicle and Shape objects,
/// draws and drives the vehicles, and prints the area of the shapes. The file includes
/// the necessary header files and defines the main function.
///
/// @date 2023-03-25
/// @author Ry Kuper
///




///
/// @brief The main function.
///
/// This function creates some Vehicle and Shape objects, draws and drives the
/// vehicles, and prints the area of the shapes. The function also calculates the
/// total area of all the shapes and prints it to the console.
///
/// @see Vehicles, Shape, draw(), drive(), getTotalArea()
///
/// @date 2023-03-25
/// @author Dominic Szymanski
///

int main()
{

	//Create some vehicles
	BMW bmw;
	Mazda mazda;

	//Draw and drive the vehicles
	draw(bmw);
	drive(bmw);

	draw(mazda);
	drive(mazda);

	//Create some Shapes
	Rectangle rect1; // create a Rectangle object
	rect1.setLength(5); // set the length to 5
	rect1.setWidth(3); // set the width to 3

	Rectangle rect2; // create a Rectangle object
	rect2.setLength(3); // set the length to 3
	rect2.setWidth(8); // set the width to 8

	Circle circle1; // create a Circle object
	circle1.SetRadius(4); // set the radius to 4

	Circle circle2; // create a Circle object
	circle2.SetRadius(6); // set the radius to 6


	//Draw circle and print their areas and circumferences
	draw(circle1);
	double circleArea = circle1.getArea();
	std::cout << "Area of circle: " << circleArea << std::endl;


	//Draw rectangles and print areas
	draw(rect1);
	double rectArea = rect1.getArea();
	std::cout << "Area of rectangle: " << rectArea << std::endl;

	//Get total area of shapes

	Shape* shapes[] = { &rect1, &rect2, &circle1, &circle2 };
	int numShapes = sizeof(shapes) / sizeof(shapes[0]);

	double totalArea = getTotalArea(shapes, numShapes);
	std::cout << "\nTotal area of all shapes: " << totalArea << std::endl;

	return 0;
}