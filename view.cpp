#include "view.hpp"

void View::add_listener(std::shared_ptr<IController> ic)
{
    _icontroller = ic;
}

void View::show_object([[maybe_unused]] std::shared_ptr<IGeomPrim> object)
{
}

void View::show_message([[maybe_unused]] std::string_view mes)
{
}
