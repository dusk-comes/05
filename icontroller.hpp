#pragma once

#include <memory>
#include <string_view>
#include "file_format.hpp"
#include "igeomprim.hpp"
#include "primtype.hpp"

class IController : public std::enable_shared_from_this<IController>
{
    using ID = int;

    virtual void do_add_object(PrimType) = 0;
    virtual void do_del_object(ID) = 0;
    virtual void do_create_document(std::string_view) = 0;
    virtual void do_import_document(FileFormat) = 0;
    virtual void do_export_document(FileFormat) = 0;
};
