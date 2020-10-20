CFLAGS=-std=c++17

debug: noopt run

noopt: $(shell find src/engine/ -type f)
	g++ $(CFLAGS) src/engine/*.cpp -o main

opt: $(shell find src/engine/ -type f)
	g++ $(CFLAGS) -O2 src/engine/*.cpp -o main

run:
	./main

