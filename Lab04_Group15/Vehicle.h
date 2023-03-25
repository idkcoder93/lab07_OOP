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


/// @brief The BMW class.
///
/// This class is a concrete implementation of the Vehicles abstract class.
/// It represents a BMW vehicle and overrides the abstract methods of the parent class.
///
/// @date 2023-03-25
/// @author Alex Friedman

class BMW :public Vehicles
{
public:

/// @brief Draw function for a BMW object.
///
/// This function prints out an ASCII art representation of a BMW car.
///
/// @date 2023-03-25
/// @param None
/// @return void
	
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

/// @brief Drive function for a BMW object.
///
/// This function prints out a message indicating that a BMW car is being driven.
///
/// @date 2023-03-25
/// @param None
/// @return void
	
	
	void drive()
	{
		//int speed = getSpeed() + 1; 
		//std::cout << "The BMW is going " << speed << " kmp" << std::endl;
		std::cout << "\nDriving a BMW" << std::endl;
	}
};



/// @brief The Mazda class.
///
/// This class is a concrete implementation of the Vehicles abstract class.
/// It represents a Mazda vehicle and overrides the abstract methods of the parent class.
///
/// @date 2023-03-25
/// @author Dominic Szymanski

class Mazda :public Vehicles
{
public:

/// @brief Draw function for a Mazda object.
///
/// This function prints out an ASCII art representation of a Mazda car.
///
/// @date 2023-03-25
/// @param None
/// @return void
	
	
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

/// @brief Drive function for a Mazda object.
///
/// This function prints out a message indicating that a Mazda car is being driven.
///
/// @date 2023-03-25
/// @param None
/// @return void
	
	void drive() //I couldnt find speed in the assignment requirements, I think it just has to print "Driving a ___"
	{
		//int speed = getSpeed() + 1;  
		//std::cout << "The Mazda is going " << speed << " kmp" << std::endl;
		std::cout << "\nDriving a Mazda" << std::endl;
	}
};

void draw(Vehicles& car);
void drive(Vehicles& car);