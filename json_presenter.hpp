#include "ipresenter.hpp"

class JsonPresenter : public IPresenter
{
    public:
        Data serialize(std::filesystem::path);
        std::filesystem::path deserialize(const Data&);
};
