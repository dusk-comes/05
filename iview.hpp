#pragma once

#include <memory>
#include <string_view>
#include "icontroller.hpp"
#include "igeomprim.hpp"

struct IView
{
    virtual void add_listener(std::shared_ptr<IController>) = 0;

    virtual void show_object(std::shared_ptr<IGeomPrim>) = 0;

    virtual void show_message(std::string_view) = 0;

    virtual void click_on_add_object() = 0;

    virtual void click_on_create_document() = 0;

    virtual void click_on_export_document() = 0;

    virtual void click_on_import_document() = 0;
};
