#include "Mazda.h"

/// @brief The Mazda class.
///
/// This class is a concrete implementation of the Vehicles abstract class.
/// It represents a Mazda vehicle and overrides the abstract methods of the parent class.
///
/// @date 2023-03-25
/// @author Dominic Szymanski



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
	/// @date 2023-03-25
	/// @param None
	/// @return void

	void Mazda :: drive()
	{
		
		std::cout << "\nDriving a Mazda" << std::endl;
	}
