#pragma once
#include "Drawable.h"
#include<iostream>

class Vehicles : public Drawable
{
	unsigned int speed;
public:
	virtual void drive() = 0;

	void setSpeed(int speed)
	{
		this->speed = speed;
	}

	int getSpeed()
	{
		return speed;
	}

	Vehicles()
	{
		this->speed = 0;
	}
};

class BMW :public Vehicles
{
public:

	void draw()
	{
		std::cout << "\nDrawing a BMW: " << std::endl;
		std::cout << "***************** " << std::endl;
		std::cout << "*  *********    *" << std::endl;
		std::cout << "*  *        *   *" << std::endl;
		std::cout << "*  * *******    *" << std::endl;
		std::cout << "*  *        *   *" << std::endl;
		std::cout << "*  *********    *" << std::endl;
		std::cout << "***************** " << std::endl;
	}

	void drive()
	{
		//int speed = getSpeed() + 1; 
		//std::cout << "The BMW is going " << speed << " kmp" << std::endl;
		std::cout << "\nDriving a BMW" << std::endl;
	}
};

class Mazda :public Vehicles
{
public:

	void draw()
	{
		std::cout << "\nDrawing a Mazda: " << std::endl;
		std::cout << "***************** " << std::endl;
		std::cout << "*  *         *  *" << std::endl;
		std::cout << "*  * *     * *  *" << std::endl;
		std::cout << "*  *  *   *  *  *" << std::endl;
		std::cout << "*  *   * *   *  *" << std::endl;
		std::cout << "***************** " << std::endl;
	}

	void drive() //I couldnt find speed in the assignment requirements, I think it just has to print "Driving a ___"
	{
		//int speed = getSpeed() + 1;  
		//std::cout << "The Mazda is going " << speed << " kmp" << std::endl;
		std::cout << "\nDriving a Mazda" << std::endl;
	}
};

void draw(Vehicles& car);
void drive(Vehicles& car);