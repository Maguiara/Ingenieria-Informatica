CXX = g++ 
CXXFLAGS = -std=c++17 -g -Wall

all = polinomio

polinomio: polinomio.o polinomio_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

clean: 
	rm -r *.o polinomio  
