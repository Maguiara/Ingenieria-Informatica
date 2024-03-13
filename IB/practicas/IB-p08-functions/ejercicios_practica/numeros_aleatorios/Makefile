CXX = g++ 
CXXFLAGS = -std=c++17 -g -Wall

all = aleatorio

aleatorio: aleatorio.o aleatorio_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

clean: 
	rm -r *.o aleatorio 

