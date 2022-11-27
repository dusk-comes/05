#include <filesystem>
#include <memory>
#include "shape.hpp"
#include "data.hpp"
#include "document.hpp"

class Model
{
    public:
        explicit Model();

        std::shared_ptr<Shape> gen_shape(Shape::Type);

        void create_document(std::string_view);

        void import_document(std::filesystem::path);

        void export_document();

    private:
        std::unique_ptr<Document> _doc;
};
