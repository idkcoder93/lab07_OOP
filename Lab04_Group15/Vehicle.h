#pragma once
#include "Drawable.h"
#include<iostream>

class Vehicle: public Drawable
{
	unsigned int speed;
public:
	virtual void draw() = 0;
	virtual void drive() = 0;
	//unsigned int speed;

	void setSpeed(int speed)
	{
		this->speed = speed;
	}

	int getSpeed()
	{
		return speed;
	}

	Vehicle()
	{
		this->speed = 0;
	}
};

class BMW :public Vehicle
{
public:

	void draw() // close enough?
	{
		std::cout << "   ****" << std::endl;
		std::cout << " *   *   *" << std::endl;
		std::cout << "***********" << std::endl;
		std::cout << " *   *   *" << std::endl;
		std::cout << "   ****" << std::endl;
	}

	void drive()
	{
		int speed = getSpeed() + 1; // idk if this is correct please check 
		std::cout << "The BMW is going " << speed << " kmp" << std::endl;
	}
};

class Mazda :public Vehicle
{
public:

	void draw() // close enough?
	{
		std::cout << "   ****" << std::endl;
		std::cout << " *      *" << std::endl;
		std::cout << "*  *  *   *" << std::endl;
		std::cout << " *   *   *" << std::endl;
		std::cout << "   ****" << std::endl;
	}

	void drive()
	{
		int speed = getSpeed() + 1; // idk if this is correct please check 
		std::cout << "The Mazda is going " << speed << " kmp" << std::endl;
	}
};

void DisplayDrive(Vehicle& car);