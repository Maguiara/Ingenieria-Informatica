CXX = g++
CXXFLAGS = -std=c++17 -g -Wall

all = function-example

function-example: function-example.o function-example_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

clean: 
	r -r *.o function-example 
