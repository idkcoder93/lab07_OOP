#pragma once
#include "Vehicle.h"


/// @brief Mazda class derived from Vehicle
///
/// This class inherits from the Vehicle class and is a concrete class from Vehicle. 
/// Overrides the draw function from the Drawable class. 
/// Inherits drive function from Vehicle and overrides in their derived class. 
/// 
/// @date 2023-03-25
/// @author Dominic Szymanski
/// 

class Mazda : public Vehicles
{
public:
	void draw();
	void drive();
};
