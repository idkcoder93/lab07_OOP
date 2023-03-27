/// @file BMW.h
/// @brief Contains the declaration of the BMW class, which is a concrete implementation of the Vehicles abstract class.
///
/// This file includes the declaration of the BMW class, which represents a BMW vehicle and overrides the abstract
/// methods of the parent class. The BMW class is defined in this file and is derived from the Vehicles class. The draw and drive
/// methods are also declared in this file.
///
/// @date 2023-03-25
/// @author Dominic Szymanski
///
/// @see Vehicle.h
#pragma once
#include"Vehicle.h"

/// @brief The BMW class.
///
/// This class is a concrete implementation of the Vehicles abstract class.
/// It represents a BMW vehicle and overrides the abstract methods of the parent class.
/// This concrete class derived from Vehicle overrides the drive functrion
/// It inherits the draw function from Drawable class and prints the corresponding symbol
/// 
/// @date 2023-03-25
/// @author Alex Friedman

class BMW :public Vehicles
{
public:
	void draw();
	void drive();
};