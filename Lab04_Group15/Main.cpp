#include"Drawable.h"
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Vehicle.h"
#include"BMW.h"
#include"Mazda.h"
#include<iostream>


int main()
{

	BMW bmw;
	Mazda mazda;

	
	draw(bmw);
	drive(bmw);

	draw(mazda);
	drive(mazda);

	
	Rectangle rect1; 
	rect1.setLength(5); 
	rect1.setWidth(3); 

	Rectangle rect2; 
	rect2.setLength(3); 
	rect2.setWidth(8); 

	Circle circle1; 
	circle1.SetRadius(4); 

	Circle circle2; 
	circle2.SetRadius(6); 


	
	draw(circle1);
	double circleArea = circle1.getArea();
	std::cout << "Area of circle: " << circleArea << std::endl;


	
	draw(rect1);
	double rectArea = rect1.getArea();
	std::cout << "Area of rectangle: " << rectArea << std::endl;

	
	Shape* shapes[] = { &rect1, &rect2, &circle1, &circle2 };
	int numShapes = sizeof(shapes) / sizeof(shapes[0]);

	double totalArea = getTotalArea(shapes, numShapes);
	std::cout << "\nTotal area of all shapes: " << totalArea << std::endl;

	return 0;
}