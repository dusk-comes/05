#include "json_presenter.hpp"

std::unique_ptr<Data> import_(std::filesystem::path file)
{
    //serialize file
    return std::make_unique<Data>();
}

std::filesystem::path export_(std::string_view filename, std::shared_ptr<Data> data)
{
    //deserialize data
    return filename;
}
