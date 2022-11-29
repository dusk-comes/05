#include <filesystem>
#include <string_view>
#include <memory>
#include "igeomprim.hpp"
#include "primtype.hpp"
#include "file_format.hpp"

struct IModel
{
    using ID = int;

    virtual std::shared_ptr<IGeomPrim> add_object(PrimType) = 0;
    virtual void del_object(ID) = 0;
    virtual void create_document(std::string_view) = 0;
    virtual void import_document(FileFormat) = 0;
    virtual void export_document(FileFormat) = 0;
};
