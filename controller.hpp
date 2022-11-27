#include "command.hpp"
#include "shape.hpp"
#include "view.hpp"
#include "model.hpp"

class Controller
{
    public :
        Controller(Model, View);
        void do_gen_shape(Shape::Type);
        void do_create_document();
        void do_import_document();
        void do_export_document();

    private:
         Model _model;
         View _view;

};
