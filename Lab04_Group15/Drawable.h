#pragma once

/// @file Drawable.h
/// @brief Drawable class explanation
///
/// This file contains the definition of the Drawable class, which is an abstract class that provides
/// a draw() method that must be implemented by its derived classes. This file also includes any necessary
/// header files.
///
/// @date 2023-03-25
/// @author Alex Fridman

class Drawable
{

	/// @brief Draws the object.
	
public:
	virtual void draw() = 0;
};