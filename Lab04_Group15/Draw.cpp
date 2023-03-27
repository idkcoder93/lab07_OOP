#include"Drawable.h"
// @file draw.cpp
/// @brief Implementation file for the draw function.
///
/// This file contains the implementation for the draw function which takes a Drawable object
/// as input and calls its draw function to display its drawing. The file includes the necessary
/// header files and defines the draw function.
///
/// @date 2023-03-25
/// @author Alex Friedman





/// @brief Function to draw a Shape object.
/// functions inherits from both vehicles and shapes
/// @param shape The Shape object to draw.
void draw(Drawable& item) {
	item.draw();
}