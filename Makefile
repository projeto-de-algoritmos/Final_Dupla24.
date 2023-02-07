# Executable
BINFOLDER := bin/
# .hpp
INCFOLDER := inc/
# .cpp
SRCFOLDER := src/
# .o
OBJFOLDER := obj/
CC := g++
CPPFLAGS := -Wall  -ggdb 
CFLAGS := -Wall -ggdb 

SRCFILES := $(wildcard src/*.cpp)
all: $(SRCFILES:src/%.cpp=obj/%.o)
	@ echo 'Construindo arquivo binario usando GCC linker: $<'
	$(CC) $(CPPFLAGS) obj/*.o -o bin/prog
	@ echo 'Terminou a construção do binario: bin/prog'
	@ echo ' '
	
obj/%.o: src/%.cpp
	@ echo 'Construindo target usando GCC compiler: $<'
	$(CC) $(CPPFLAGS) -c $< -o $@ -I./inc
	@ echo ' '

run: bin/prog
	bin/prog $$(hostname)
.PHONY: clean
clean:
	rm -rf obj/*
	rm -rf bin/*
