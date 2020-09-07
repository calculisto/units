include ../config.mk

all: generate_units units.txt
	./generate_units

clean:
	rm generate_units generate_units.o

generate_units.o: generate_units.cpp units.txt
