CC=g++
CFLAGS+=-Wall -Wextra -Werror -lstdc++ -I./include/hashmap -I./include/linkedlist
BIN_DIR=bin
SRC_DIR=src
BIN_NAME=hash_map

SRC_FILES=$(SRC_DIR)/linked-list.cpp $(SRC_DIR)/hash-map.cpp $(SRC_DIR)/main.cpp

# SRC_FILES=$(SRC_DIR)/main.cpp

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
