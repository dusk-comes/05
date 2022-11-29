#include "json_presenter.hpp"

Data JsonPresenter::serialize(std::filesystem::path path)
{
    return Data();
}

std::filesystem::path JsonPresenter::deserialize(const Data& data)
{
    return "path_to_file";
}
