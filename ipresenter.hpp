#pragma once

#include <filesystem>
#include <memory>
#include "data.hpp"

struct IPresenter
{
    enum class Type {JSON};

    virtual std::unique_ptr<Data> import_(std::filesystem::path) = 0;

    virtual std::filesystem::path export_(std::string_view, std::shared_ptr<Data>) = 0;
};


