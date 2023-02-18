#include"Drawable.h"
#include"Shape.h"
#include"Vehicle.h"
#include<iostream>

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
	std::cout << "The circumference of the circle is: " << circle1.getCircum() << std::endl;
	//std::cout << "The circumference of the circle is: " << circle2.getCircum() << std::endl;

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