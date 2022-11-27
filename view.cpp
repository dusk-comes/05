#include "view.hpp"
#include <memory>

View::View() : 
    _canvas{320.0, 240.0}
{
}

void View::show(Point point, std::shared_ptr<Shape> shape)
{
    _canvas.paint(point, shape);
}
