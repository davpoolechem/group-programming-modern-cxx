CXX=g++
CXXFLAGS=-O3 -std=c++17

srcfiles=optional.cpp
binaries=$(patsubst %.cpp, %-exe, $(srcfiles))

all: exe 

exe: $(binaries) 
%-exe: %.cpp 
	$(CXX) $(CXXFLAGS) $< -o $@ 
	mv $@ bin/

clean: 
	rm -rf bin/*
