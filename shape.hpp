#pragma once

#include <string>

class Shape 
{
    public:
        enum class Type {CIRCLE, RECTANGLE};

        Shape() = delete;

        Shape(Type);

        int get_id();

    private:
        static int _newid;
        const int _id;
        std::string name;
        Type type;

};
