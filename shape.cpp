#include "shape.hpp"

int Shape::_newid = 0;

Shape::Shape(Shape::Type value) :
    _id{++_newid},
    type{value}
{
}

int Shape::get_id()
{
    return _id;
}
