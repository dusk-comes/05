#include "model.hpp"
#include "file_format.hpp"
#include "igeomprim.hpp"
#include "ipresenter.hpp"
#include "primtype.hpp"
#include "circle.hpp"
#include "presenter_factory.hpp"

std::shared_ptr<IGeomPrim> Model::add_object(PrimType type)
{
    std::shared_ptr<IGeomPrim> object;

    switch (type)
    {
        case PrimType::CIRCLE:
            object = std::shared_ptr<IGeomPrim>(new Circle());
    }

    _data.push_back(object);

    return object;
}

void Model::create_document(std::string_view docname)
{
    _doc.set_docname(docname);
}

void Model::export_document(FileFormat format)
{
    PresenterFactory pf = PresenterFactory();
    std::unique_ptr<IPresenter> presenter = pf.create(format);
    presenter->deserialize(_data); 
}

void Model::import_document(FileFormat format)
{
    PresenterFactory pf = PresenterFactory();
    std::unique_ptr<IPresenter> presenter = pf.create(format);
    presenter->serialize("file_path");
}
    
