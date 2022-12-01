#include "iview.hpp"

class View : public IView
{
    public:
        void add_listener(std::shared_ptr<IController>) override;

        void show_object(std::shared_ptr<IGeomPrim>) override;

        void show_message(std::string_view) override;

        void click_on_add_object() override;

        void click_on_create_document() override;

        void click_on_export_document() override;

        void click_on_import_document() override;

    private:
        std::shared_ptr<IController> _icontroller;
};
