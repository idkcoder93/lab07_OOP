
/// @brief Drawable class explanation
///
/// This file contains the definition of the Drawable class, which is an abstract class that provides
/// a draw() method that must be implemented by its derived classes. This file also includes any necessary
/// header files.
///
/// @date 2023-03-25
/// @author Alex Friedman
#pragma once

/// @brief The Drawable class.
///
/// This class is an abstract class that defines a single method, draw().
/// Any class that inherits from Drawable must implement this method.
class Drawable
{

	/// @brief Draws the object.
	///
	/// @return void
	
public:
	virtual void draw() = 0;
};