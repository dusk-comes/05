#include "presenter_factory.hpp"
#include "json_presenter.hpp"

std::unique_ptr<IPresenter> PresenterFactory::createPresenter(IPresenter::Type type)
{
    switch(type)
    {
        case IPresenter::Type::JSON:
            return std::unique_ptr<JsonPresenter>();
    }

    return nullptr;
};
