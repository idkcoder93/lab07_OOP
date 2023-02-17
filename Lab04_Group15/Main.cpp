#include"Drawable.h"
#include"Shape.h"
#include"Car.h"
#include<iostream>

int main()
{
	Drawable* shape;
	Rectangle rec;
	Circle cir;
	shape = &rec;

	//shape->draw();
	cir.setCircum(5);
	std::cout << std::endl;
	std::cout << "The area of the circle is " << cir.CircleArea();

	return 0;
}