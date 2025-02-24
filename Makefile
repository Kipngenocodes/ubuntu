CC = gcc
CFLAGS = -Wall -Wextra
TARGET = output
SOURCES = $(wildcard *.c)

all:
    $(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

run: all
    ./$(TARGET)

clean:
    rm -f $(TARGET)
