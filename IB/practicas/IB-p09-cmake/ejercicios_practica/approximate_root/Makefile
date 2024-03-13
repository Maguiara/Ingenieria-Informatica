CXX = g++ 
CXXFLAGS = -std=c++17 -g -Wall

all = raiz-aproximada

raiz-aproximada: raiz-aproximada.o raiz-aproximada_main.o    
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

clean: 
	rm -r *.o raiz-aproximada 
