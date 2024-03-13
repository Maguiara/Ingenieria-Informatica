CXX = g++ 
CXXFLAGS = -std=c++17 -g -Wall

all = comparacion

comparacion: comparacion.o comparacion_main.o    
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

clean: 
	rm -r *.o comparacion 
