#pragma once

#include "data.hpp"
#include "filesystem"

struct IPresenter
{
    virtual Data serialize(std::filesystem::path) = 0;
    virtual std::filesystem::path deserialize(const Data&) = 0;
};
