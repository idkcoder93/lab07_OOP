#include "Shape.h"

double getTotalArea(Shape** shapes, int numShapes) {
    double totalArea = 0;
    for (int i = 0; i < numShapes; i++) {
        totalArea += shapes[i]->getArea();
    }
    return totalArea;
}