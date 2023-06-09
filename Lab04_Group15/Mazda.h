/// @file Mazda.h
/// @brief Contains the declaration of the Mazda class.
///
/// @details This file includes the declaration of the Mazda class, which is a concrete implementation of the Vehicles abstract class.
/// It represents a Mazda vehicle and overrides the abstract methods of the parent class.
///
/// The Mazda class inherits from the Vehicles abstract class and provides specific implementations for the draw and drive methods.
/// It represents a Mazda vehicle, and any instance of the Mazda class can be drawn on the screen or driven on the road.
///
/// @date 2023-03-28
/// @see Vehicle.h
/// @note This class does not add any new data members or methods to the parent class.
/// @author Dominic Szymanski
#pragma once
#include "Vehicle.h"

class Mazda : public Vehicles
{
public:
	/// @brief prints out the Mazda class symbol
	/// 
	/// @detailed this symbol is printed out on the console with its corresponding symbol
	/// @see Mazda.cpp
	void draw();

	/// @brief prints message 
	/// 
	/// @detailed function is derived from abstract class Vehicle
	void drive();
};
