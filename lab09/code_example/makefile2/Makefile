# I am a comment, and I want to say that the variable CC will be
# the compiler to use. gcc for C program, define as g++ for C++
CC = g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
# -c      says to generate the object file.
# -g    adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
CFLAGS= -c -Wall
TARGET = hello
INCLUDE = functions.h
OBJ = main.o factorial.o hello.o

$(TARGET): $(OBJ)
	$(CC) $^ -o $@

%.o: %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f *.o $(TARGET)