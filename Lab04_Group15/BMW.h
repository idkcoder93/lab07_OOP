#pragma once
#include"Vehicle.h"

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
	void draw();
	void drive();
};