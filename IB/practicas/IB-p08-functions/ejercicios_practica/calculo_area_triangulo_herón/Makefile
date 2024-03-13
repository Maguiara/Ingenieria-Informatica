CXX = g++ 
CXXFLAGS = -std=c++17 -g -Wall

all = area-triangulo

area-triangulo: area-triangulo.o area-triangulo_main.o    
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

clean: 
	rm -r *.o area-triangulo 

