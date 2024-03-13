CXX = g++ 
CXXFLAGS = -std=c++17 -g -Wall

all = producto-escalar

producto-escalar: producto-escalar.o producto-escalar_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

clean: 
	rm -r *.o producto-escalar  
