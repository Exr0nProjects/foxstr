CFLAGS=""

debug: main run

main: src/engine/main.c
	gcc src/engine/main.c -o main $(CFLAGS)

run:
	./main

