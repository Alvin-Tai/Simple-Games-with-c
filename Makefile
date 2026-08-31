# Simple Games Collection - Makefile

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -pedantic
TARGET = game
SRC = game.c

# Default target
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Run the game
run: $(TARGET)
	./$(TARGET)

# Clean build artifacts
clean:
	rm -f $(TARGET)

# Rebuild from scratch
rebuild: clean all

.PHONY: all run clean rebuild
