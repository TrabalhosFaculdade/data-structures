CC=g++
CFLAGS+=-Wall -Wextra -Werror -lstdc++ -I./include
BIN_DIR=bin
SRC_DIR=src
BIN_NAME=bin_tree

SRC_FILES=$(SRC_DIR)/node.cpp $(SRC_DIR)/tree.cpp $(SRC_DIR)/main.cpp

all: 
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC_FILES) -o bin/$(BIN_NAME)

project:
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC_FILES) -o bin/$(BIN_NAME)

.PHONY: clean

clean:
	rm -rf $(BIN_DIR)