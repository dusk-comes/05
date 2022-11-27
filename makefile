src = shape.cpp circle.cpp rectangle.cpp shape_factory.cpp model.cpp document.cpp json_presenter.cpp presenter_factory.cpp view.cpp canvas.cpp

obj = $(src:.cpp=.o)

all: $(obj)

%.o : %.cpp
	g++ --std=c++17 -o $@ -c $<

clean:
	rm *.o

.PHONY: clean

