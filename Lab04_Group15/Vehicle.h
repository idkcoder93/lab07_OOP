#pragma once
#include "Drawable.h"
#include<iostream>
/// @file
/// @brief The Vehicle.h header file.
///
/// This file contains the class definitions for the Vehicles, BMW, and Mazda classes.
/// The Vehicles class is an abstract base class that inherits from the Drawable interface.
/// The BMW and Mazda classes inherit from the Vehicles class and implement the drive and draw
/// functions to provide specific functionality for each vehicle type. The file also includes
/// the necessary header files and function declarations for draw and drive.
///
/// @date 2023-03-25
/// @author Ry Kuper




/// @brief The Vehicles class.
///
/// This class is an abstract base class for all types of vehicles. It inherits from the
/// Drawable class, and provides a virtual drive() function that must be implemented
/// by any derived classes. The class also provides functions for setting and getting
/// the speed of the vehicle.
///
/// @date 2023-03-25
/// @author Ry Kuper

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


void draw(Vehicles& car);
void drive(Vehicles& car);