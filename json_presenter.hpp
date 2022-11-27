#include <memory>
#include "ipresenter.hpp"

struct JsonPresenter : IPresenter
{
    std::unique_ptr<Data> import_(std::filesystem::path);

    std::filesystem::path export_(std::string_view, std::shared_ptr<Data>);
};
