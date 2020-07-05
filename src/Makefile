CC=g++
CFLAGS=-Wall -Wpedantic -Werror -std=c++17

.PHONY: all clean

all: rbtree.o

rbtree.o: rbtree.cpp rbtree.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o
