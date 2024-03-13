CXX = g++
CXXFLAGS = -std=c++17 -g -Wall

all = hipotenusa

hipotenusa: hipotenusa.o hipotenusa_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^
 
.PHONY: all clean
 
clean: 
	rm -r *.o hipotenusa
