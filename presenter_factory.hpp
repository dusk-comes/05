#include "ipresenter.hpp"
#include "file_format.hpp"
#include <memory>

struct PresenterFactory
{
    std::unique_ptr<IPresenter> create(FileFormat);
};
