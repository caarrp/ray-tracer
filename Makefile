CC = gcc
SOURCES = $(wildcard *.c)
OBJECTS = $(addsuffix .o, $(basename $(sources)))
CFLAGS = -g -Wall -std=c11 -DDEBUG=1
TARGET = vec

$(TARGET) : $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)

%.o : %.c
	$(CC) -c $(FLAGS) $< -o $@

clean :
	rm $(TARGET) $(OBJECTS)
