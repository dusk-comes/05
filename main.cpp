#include "icontroller.hpp"
#include "imodel.hpp"
#include "iview.hpp"
#include "model.hpp"
#include "view.hpp"
#include "controller.hpp"
#include <memory>

int main()
{
    std::shared_ptr<IView> view(new View());
    std::shared_ptr<IModel> model(new Model());
    std::shared_ptr<IController> controller(new Controller(model, view));

    view->add_listener(controller);

    view->click_on_add_object();
    view->click_on_create_document();
    view->click_on_export_document();
    view->click_on_export_document();

    return 0;
}
