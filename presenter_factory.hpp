#include <memory>
#include "ipresenter.hpp"

class PresenterFactory
{
    public:
        std::unique_ptr<IPresenter> createPresenter(IPresenter::Type);
};


