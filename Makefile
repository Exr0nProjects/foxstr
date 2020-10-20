CFLAGS=""

debug: main run

main: $(shell find src/engine/ -type f)
	g++ --std=c++11 src/engine/main.cpp -o main $(CFLAGS)

run:
	./main

