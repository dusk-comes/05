#include "view.hpp"
#include "file_format.hpp"
#include "primtype.hpp"

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

void View::click_on_add_object()
{
    _icontroller->do_add_object(PrimType::CIRCLE);
}

void View::click_on_create_document()
{
    _icontroller->do_create_document("document_name");
}

void View::click_on_export_document()
{
    _icontroller->do_export_document(FileFormat::JSON);
}

void View::click_on_import_document()
{
    _icontroller->do_import_document(FileFormat::JSON);
}
