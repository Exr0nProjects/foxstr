CFLAGS=""

debug: noopt run

noopt: $(shell find src/engine/ -type f)
	g++ --std=c++11 $(CFLAGS) src/engine/*.cpp -o main

opt: $(shell find src/engine/ -type f)
	g++ --std=c++11 $(CFLAGS) -O2 src/engine/*.cpp -o main

run:
	./main

