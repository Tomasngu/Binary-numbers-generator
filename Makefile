CXX = g++
CXXFLAGS = -g -std=c++14 -Wall -pedantic

all: compile

compile: test

run: test	
	./test

test: binary.o
	$(CXX) $^ -o test

binary.o: binary.cpp
	$(CXX) $(CXXFLAGS) -c binary.cpp -o binary.o

clean:
	-rm -f *.o
	-rm -f test