#include <memory>
#include "canvas.hpp"
#include "point.hpp"
#include "shape.hpp"

class View
{
    public:
        explicit View();

        void show(Point, std::shared_ptr<Shape>);
        
    private:
        Canvas _canvas;
};
