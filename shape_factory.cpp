#include "shape_factory.hpp"
#include "circle.hpp"
#include "rectangle.hpp"

std::unique_ptr<Shape> ShapeFactory::createShape(Shape::Type type)
{
    switch(type)
    {
        case Shape::Type::CIRCLE:
            return std::unique_ptr<Circle>();
        case Shape::Type::RECTANGLE:
            return std::unique_ptr<Rectangle>();
    }

    return nullptr;
};
