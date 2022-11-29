src = circle.cpp controller.cpp document.cpp geomprim.cpp json_presenter.cpp model.cpp presenter_factory.cpp view.cpp

obj = $(src:.cpp=.o)

all: $(obj)

%.o : %.cpp
	g++ --std=c++17 -o $@ -c $<

clean:
	rm *.o

.PHONY: clean

