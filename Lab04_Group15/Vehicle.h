#pragma once
#include "Drawable.h"
#include<iostream>


/// @file Vehicle.h 
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

class Vehicles : public Drawable
{
	unsigned int speed;

public:

	/// @brief function that inherits from its derived classes
	/// 
	virtual void drive() = 0;


	/// @brief sets number for the speed data member
	/// 
	/// @param integer-type variable for data member
	void setSpeed(int speed)
	{
		this->speed = speed;
	}

	/// @brief retrieves speed of the Vehicle
	/// 
	/// @returns speed which is a integer-type data member
	int getSpeed()
	{
		return speed;
	}

	/// @brief default constructor initializes data member of the Vehicle classes and its inheritances
	/// 
	Vehicles()
	{
		this->speed = 0;
	}
};

/// @brief function inherits from the Drawable class that prints out symbol/shape according to the class
/// 
/// @param abstract class Drawable and its inheriting classes
/// @see Drawable.h
void draw(Drawable& item);

/// @brief drive function that prints message
/// 
/// @parama abstract class that inherits Vechile type classes 
void drive(Vehicles& car);