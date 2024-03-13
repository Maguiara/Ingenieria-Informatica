CXX = g++ 
CXXFLAGS = -std=c++17 -g -Wall

all = change-case

change-case: change-case.o change-case_main.o    
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

clean: 
	rm -r *.o change-case 
