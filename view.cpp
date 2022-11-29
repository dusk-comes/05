#include "view.hpp"

View::View() {}

void View::add_listener(std::shared_ptr<IController> ic)
{
    _icontroller = ic;
}

void View::show_object(std::shared_ptr<IGeomPrim> object)
{
}

void View::show_message(std::string_view mes)
{
}
