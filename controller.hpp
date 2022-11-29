#include <memory>
#include "iview.hpp"
#include "imodel.hpp"
#include "icontroller.hpp"

class Controller : IController 
{
    public:
        Controller(std::shared_ptr<IModel>, std::shared_ptr<IView>);

        using ID = int;

        void do_add_object(PrimType) override;
        void do_del_object(ID) override;
        void do_create_document(std::string_view) override;
        void do_import_document(FileFormat) override;
        void do_export_document(FileFormat) override;

    private:
        std::shared_ptr<IModel> _imodel;
        std::shared_ptr<IView> _iview;
};
