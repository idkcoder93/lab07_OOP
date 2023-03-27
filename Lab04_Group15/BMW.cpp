#include"BMW.h"
/// @file BMW.cpp
/// @brief The BMW class implementation file.
///
/// This file contains the implementation of the BMW class's draw() function.
/// The function draws an ASCII art representation of a BMW car.
///
/// @date 2023-03-25
/// @author


///@brief Draws a BMW vehicle to the console.
///
///This function outputs a text - based representation of a BMW vehicle to the console.
///It does not take any input parameters and does not return anything.
///
/// @date 2023-03 -25
/// @author

/// @brief Drive function for a BMW object.
///
/// This function prints out the symbol for the BMW class.
///	@author Dominic Szymanski 
/// @param None
/// @return void
/// @date 2023-03-25

void BMW :: draw()
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
/// @author Dominic Szymanski
/// @param None
/// @return void
/// @date 2023-03-25


void BMW :: drive()
{
	std::cout << "\nDriving a BMW" << std::endl;
}