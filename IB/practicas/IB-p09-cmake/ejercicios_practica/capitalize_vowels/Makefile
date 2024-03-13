CXX = g++ 
CXXFLAGS = -std=c++17 -g -Wall

all = vocales-mayusculas

vocales-mayusculas: vocales-mayusculas.o vocales-mayusculas_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

clean: 
	rm -r *.o vocales-mayusculas                           
