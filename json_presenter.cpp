#include "json_presenter.hpp"

Data JsonPresenter::serialize([[maybe_unused]] std::filesystem::path path)
{
    return Data();
}

std::filesystem::path JsonPresenter::deserialize([[maybe_unused]] const Data& data)
{
    return "path_to_file";
}
