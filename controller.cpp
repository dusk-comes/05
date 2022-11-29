#include "controller.hpp"
#include "file_format.hpp"

Controller::Controller(std::shared_ptr<IModel> imodel, std::shared_ptr<IView> iview) :
    _imodel{imodel},
    _iview{iview}
{
    _iview->add_listener(shared_from_this());
}

void Controller::do_add_object(PrimType type)
{
    auto object = _imodel->add_object(type);

    if (object != nullptr)
        _iview->show_object(object); 
    else
        _iview->show_message("something wrong");
}

void Controller::do_create_document(std::string_view val)
{
    _imodel->create_document(val);
    _iview->show_message("document created");
}

void Controller::do_import_document(FileFormat format)
{
    _imodel->import_document(format);
    _iview->show_message("document imported");
}

void Controller::do_export_document(FileFormat format)
{
    _imodel->export_document(format);
    _iview->show_message("document exported");
}

