#include "iview.hpp"

class View : IView
{
    public:
        void add_listener(std::shared_ptr<IController>) override;

        void show_object(std::shared_ptr<IGeomPrim>) override;

        void show_message(std::string_view) override;

    private:
        std::shared_ptr<IController> _icontroller;
};
