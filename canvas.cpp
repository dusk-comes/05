#include "canvas.hpp"

Canvas::Canvas() {}

Canvas::Canvas(double width, double hight) :
    _width{width},
    _hight{hight}
{
}

void Canvas::paint(Point point, std::shared_ptr<Shape> shape)
{
}
