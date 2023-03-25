#include "Shape.h"
#include<iostream>


/// @file
/// @brief The DisplayDrawing.cpp file.
///
/// This file contains the implementation of the draw function, which draws
/// the Shape objects passed as arguments. The file includes the necessary header
/// files and defines the function.
///
/// @date 2023-03-25
/// @author Dominic Szymanski
///



///
/// @brief Draws a shape.
///
/// This function takes a reference to a Shape object and calls its draw()
/// function to draw the shape.
///
/// @param[in] shape A reference to the Shape object to be drawn.
///
/// @see Shape
///
/// @date 2023-03-25
/// @author Dominic Szymanski
///
void draw(Shape& shape) {
	shape.draw();
}