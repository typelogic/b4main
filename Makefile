.PHONY: clean
CC = g++

main: main.cpp main.h
	$(CC) -std=c++17 main.cpp -o main

clean:
	@rm -f *.o main *.stackdump 2>/dev/null
