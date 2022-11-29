#include "geomprim.hpp"

int GeomPrim::_newid = 0;

GeomPrim::GeomPrim() :
    id{++_newid}
{
}

GeomPrim::GeomPrim(PrimType type) :
    id{++_newid},
    _type{type}
{
}
