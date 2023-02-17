#include"Drawable.h"
#include"Shape.h"
#include"Car.h"
#include<iostream>

int main()
{
	Drawable* shape, *car;
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
	std::cout << "The area of the circle is " << cir.CircleArea() << std::endl;

	car->draw();
	std::cout << std::endl;
	DisplayDrive(car2);

	return 0;
}