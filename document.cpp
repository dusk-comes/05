#include "document.hpp"
#include <string_view>

Document::Document() :
    _name{"default_name"}
{
}

Document::Document(std::string_view name) :
    _name{name}
{
}

void Document::add_shape(std::shared_ptr<Shape> shape)
{
    _data->push_back(shape);
}

void Document::set_name(std::string_view name)
{
    _name = name;
}

std::string_view Document::get_name()
{
    return _name;
}

void Document::set_data(std::unique_ptr<Data> data)
{
    _data = std::move(data);
}

std::shared_ptr<Data> Document::get_data()
{
    return _data;
}
