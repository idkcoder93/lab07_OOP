#pragma once
#include<iostream>

class Vehicles
{
	virtual void draw() = 0;
public:
	
	unsigned int speed;
};

class BMW :public Vehicles
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
		int speed = this->speed + 1;
		std::cout << "The BMW is going " << speed << " kmp" << std::endl;
	}
};

class Mazda :public Vehicles
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
		int speed = this->speed + 1;
		std::cout << "The Mazda is going " << speed << " kmp" << std::endl;
	}
};
