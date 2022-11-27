#include "model.hpp"
#include "ipresenter.hpp"
#include "shape_factory.hpp"
#include "presenter_factory.hpp"

Model::Model() : _doc(new Document()) {}

std::shared_ptr<Shape> Model::gen_shape(Shape::Type type)
{
    auto shape_factory = ShapeFactory();

    std::shared_ptr<Shape> shape = shape_factory.createShape(type);

    _doc->add_shape(shape);

    return shape;
}

void Model::create_document(std::string_view name)
{
    _doc->set_name(name);
}

void Model::import_document(std::filesystem::path p)
{
    auto presenter_factory = PresenterFactory();
    auto jp = presenter_factory.createPresenter(IPresenter::Type::JSON);
    _doc->set_data(jp->import_(p)); 
}

void Model::export_document()
{
    auto presenter_factory = PresenterFactory();
    auto jp = presenter_factory.createPresenter(IPresenter::Type::JSON);
    jp->export_(_doc->get_name(), _doc->get_data());
}
