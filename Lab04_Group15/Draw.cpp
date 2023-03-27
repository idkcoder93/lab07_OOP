#include"Drawable.h"


/// @brief function inherits the draw function from abstract classes
///
/// @param takes Drawable abstract class has derived classes like Vehicle and Shape
void draw(Drawable& item) {
	item.draw();
}