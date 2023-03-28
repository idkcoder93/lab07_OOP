#pragma once
#include"Vehicle.h"

/// @file BMW.h
/// @brief The BMW class.
///
/// This class is a concrete implementation of the Vehicles abstract class.
/// It represents a BMW vehicle and overrides the abstract methods of the parent class.
/// This concrete class derived from Vehicle overrides the drive functrion
/// from Drawable class and prints the corresponding symbol
/// 
/// @see BMW.cpp 
/// @date 2023-03-25
/// @author Alex Friedman

class BMW :public Vehicles
{
public:
	///@brief Draws a BMW vehicle to the console.
	///
	///This function outputs a text - based representation of a BMW vehicle to the console.
	///It does not take any input parameters and does not return anything.
	void draw();

	/// @brief Drive function for a BMW object.
	///
	/// This function prints out a message indicating that a BMW car is being driven.
	void drive();
};