#include <memory>
#include <string_view>
#include "data.hpp"

class Document
{
    public:
        Document();

        Document(std::string_view);

        void add_shape(std::shared_ptr<Shape>);

        void set_name(std::string_view);

        std::string_view get_name();

        void set_data(std::unique_ptr<Data>);

        std::shared_ptr<Data> get_data();

    private:
        std::string_view _name;
        std::shared_ptr<Data> _data;
};
