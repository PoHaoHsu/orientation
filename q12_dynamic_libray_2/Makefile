.PHONY: lib

all: lib main

main:
	g++ main.cpp -Wall -I include/ -L lib/ -lelsa

lib:
	make -C lib
