NAME = test

CC = gcc
OPT = -Og
VERSION = -std=c89
OUTPUT = a.out

FLAGS = -g -fsanitize=address
WARNINGS = -Wall -Wextra -Werror -pedantic -pedantic-errors -Wpedantic
HEADERS =
LIBS = ../export/*.*o

INPUT = $(NAME).c

all: default

make_library:
	cd .. && em build lib release && cd examples

default: make_library
	$(CC) $(OPT) $(VERSION) $(HEADERS) $(FLAGS) $(WARNINGS) $(PRINT_WARNINGS) $(C99_WARNINGS) $(LIBS) -o $(OUTPUT)      $(INPUT)
	./$(OUTPUT)

clean:
	cd .. && em clean && cd examples
	$(RM) -r $(OUTPUT) ./*.dSYM
