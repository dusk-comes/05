#include "imodel.hpp"
#include "data.hpp"
#include "document.hpp"

class Model : IModel
{
    public:
        using ID = int;

        std::shared_ptr<IGeomPrim> add_object(PrimType) override;
        //void del_object(ID) override;
        void create_document(std::string_view) override;
        void import_document(FileFormat) override;
        void export_document(FileFormat) override;

    private:
        Document _doc;
        Data _data;
};
