#include "igeomprim.hpp"
#include "primtype.hpp"

class GeomPrim : public IGeomPrim
{
    public:
        GeomPrim();
        GeomPrim(PrimType);

    private:
        static int _newid;
        const int id;
        PrimType _type;
};


            
