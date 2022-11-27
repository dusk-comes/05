#include <memory>
#include "shape.hpp"
#include "point.hpp"

class Canvas
{
    public:
        explicit Canvas();

        Canvas(double, double);

        void paint(Point, std::shared_ptr<Shape>);

    private:
        double _width;
        double _hight;
};
