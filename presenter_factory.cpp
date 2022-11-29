#include "presenter_factory.hpp"
#include "json_presenter.hpp"

std::unique_ptr<IPresenter> PresenterFactory::create(FileFormat format)
{
    switch(format)
    {
        case FileFormat::JSON:
            return std::unique_ptr<IPresenter>(new JsonPresenter());
    }

    return nullptr;
}

