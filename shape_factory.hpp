#include "shape.hpp"
#include <memory>

class ShapeFactory
{
    public:
        std::unique_ptr<Shape> createShape(Shape::Type);
};


