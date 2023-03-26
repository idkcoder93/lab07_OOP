#include "Shape.h"

/// @file
/// @brief The Area.cpp file.
///
/// This file contains the implementation of the getTotalArea function, which calculates
/// the total area of an array of Shape objects. The file includes the necessary header files
/// and defines the getTotalArea function.
///
/// @date 2023-03-25
/// @author Alex Fridman
///


///
/// @brief Calculates the total area of an array of shapes.
///
/// This function takes an array of pointers to Shape objects and the number of
/// shapes in the array, and returns the total area of all the shapes.
///
/// @param[in] shapes An array of pointers to Shape objects.
/// @param[in] numShapes The number of shapes in the array.
///
/// @return The total area of all the shapes.
///
/// @see Shape
///
/// @date 2023-03-25
/// @author Alex Friedman
///
double getTotalArea(Shape** shapes, int numShapes) {
    double totalArea = 0;
    for (int i = 0; i < numShapes; i++) {
        totalArea += shapes[i]->getArea();
    }
    return totalArea;
}
