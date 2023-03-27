#include "Mazda.h"

/// @brief draw function for Mazda class
///
/// This function prints the suymbol for the user-defined Mazda class.
///
/// @author Rylan Kuper
/// @param None
/// @return void
/// @date 2023-03-25


/// @brief Draw the Mazda.
///
/// This function is responsible for printing the ASCII art of the Mazda to the console.
///	@param None
/// @return void.

	void Mazda :: draw()
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
	/// @author Rylan Kuper
	/// @param None
	/// @return void
	/// @date 2023-03-25

	void Mazda :: drive()
	{
		
		std::cout << "\nDriving a Mazda" << std::endl;
	}
