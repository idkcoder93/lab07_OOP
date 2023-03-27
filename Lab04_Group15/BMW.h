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