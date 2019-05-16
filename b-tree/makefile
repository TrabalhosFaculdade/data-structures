CC=g++
CFLAGS+=-Wall -Wextra -Werror -lstdc++ -I./include
BIN_DIR=bin
SRC_DIR=src
BIN_NAME=b_tree

SRC_FILES=$(SRC_DIR)/tree.cpp

all: 
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC_FILES) -o bin/$(BIN_NAME)

project:
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC_FILES) -o bin/$(BIN_NAME)

.PHONY: clean

clean:
	rm -rf $(BIN_DIR)

run:
	./$(BIN_DIR)/$(BIN_NAME)