#include"BMW.h"

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