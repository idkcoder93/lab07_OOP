#include"Drawable.h"
#include"Shape.h"
#include"Vehicle.h"
#include<iostream>

int main()
{
	/*Drawable* shape, *car;
	Rectangle rec;
	Circle cir;
	BMW car1;
	Mazda car2;
	shape = &rec;
	car = &car1;

	shape->draw();
	cir.SetRadius(5);
	DisplayShape(cir);
	std::cout << std::endl << std::endl;
	std::cout << "The area of the circle is " << cir.getArea() << std::endl;

	car->draw();
	std::cout << std::endl;
	DisplayDrive(car2);*/

	// the top code is just to test the functions out of scope work properly, will need create a function getTotalArea and test 4 shapes 
	
	Shape* shape[4];
	Rectangle rec2, rec3;
	Circle cir2, cir3;
	rec2.setLength(3);
	rec2.setWidth(2);
	rec3.setLength(4);
	rec3.setWidth(6);
	cir2.SetRadius(2);
	cir3.SetRadius(5);
	//Shape* shapes[4];
	shape[0] = &rec2;
	shape[1] = &rec3;
	shape[2] = &cir2;
	shape[3] = &cir3;
	std::cout << getTotalArea(shape, 4) << std::endl;
	return 0;
}
// I dont know if this is what he wants it works and its takes the an array of Shape which is encompasses both Rectangle and Circle class - any ideas