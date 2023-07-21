CXX=g++
CXXFLAGS=-O3 -std=c++17

srcfiles=constexpr.cpp noconstexpr.cpp expr.cpp tmp.cpp
binaries=$(patsubst %.cpp, %-exe, $(srcfiles))
asmfiles=$(patsubst %.cpp, %.s, $(srcfiles))

all: asm exe 

asm: $(patsubst %.cpp, %-asm, $(srcfiles))
%-asm: %.cpp
	$(CXX) $(CXXFLAGS) $< -S
	mv $(patsubst %.cpp, %.s, $<) asm/

exe: $(binaries) 
%-exe: %.cpp 
	$(CXX) $(CXXFLAGS) $< -o $@ 
	mv $@ bin/

clean: 
	rm -rf asm/*
	rm -rf bin/*
